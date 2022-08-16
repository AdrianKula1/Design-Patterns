#include <iostream>
#include <string>
#include <map>

class Texture{
    std::string name;
public:
    Texture(std::string name){
        this->name=name;
    }

    std::string getName(){
        return this->name;
    }

};

class TextureLoader{
    std::map<std::string, Texture*> textures;
public:
    Texture* createTexture(std::string name){
        if(textures.find(name)!=textures.end()){
            return textures[name];
        }else{
            textures[name]=new Texture(name);
            return textures[name];
        }
    }
};

class Tree{
    Texture *texture;
public:
    void assignTexture(Texture *texture){
        this->texture=texture;
    }

    std::string getTextureName(){
        return this->texture->getName();
    }
};

int main() {
    TextureLoader *textureLoader = new TextureLoader();

    Tree *tree1 = new Tree();
    tree1->assignTexture(textureLoader->createTexture("small"));
    std::cout << tree1->getTextureName() << std::endl;


    Tree *tree2 = new Tree();
    tree1->assignTexture(textureLoader->createTexture("small"));
    std::cout << tree1->getTextureName() << std::endl;


    Tree *tree3 = new Tree();
    tree1->assignTexture(textureLoader->createTexture("big"));
    std::cout << tree1->getTextureName() << std::endl;
    return 0;
}
