#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "RottenTomatoes.h"
#include "BinarySearchTree.h"
#include "AVLTree.h"
#include "SplayTree.h"

int main() {
    int depth = 0;

    //Vector constructor for movie objects
    vector<Movie> movie;
    getDataFromFile("../rotten_tomatoes_movies2.csv", movie);

    //Ordered BST of integers
    BinarySearchTree<int> orderedBST;
    for(int i = 1; i <= 100; i++){
        orderedBST.add(i);
    }

    //Creating file to read ordered BST into
    ofstream intBSTDepthFile;
    intBSTDepthFile.open("intBSTDepthFile.txt");
    intBSTDepthFile << "Start of Ordered BST:\n";

    //Searching through ordered BST and writing to file
    for(int i = 1; i <= 100; i++){
        depth = 0;
        orderedBST.find(i, depth);
        intBSTDepthFile << depth;
        intBSTDepthFile << "\n";
    }

    //Searching for out of bounds values
    intBSTDepthFile << "Start of out of bounds BST:\n";
    depth = 0;
    orderedBST.find(0, depth);
    intBSTDepthFile << depth;
    intBSTDepthFile << "\n";
    depth = 0;
    orderedBST.find(101, depth);
    intBSTDepthFile << depth;
    intBSTDepthFile << "\n";
    depth = 0;
    orderedBST.find(102, depth);
    intBSTDepthFile << depth;
    intBSTDepthFile << "\n";
    depth = 0;

    //Shuffled vector for the shuffled BST
    vector<int> shuffleForBST;
    for(int i = 1; i <= 100; i++){
        shuffleForBST.push_back(i);
    }
    std::random_shuffle(shuffleForBST.begin(), shuffleForBST.end());

    //Inserting shuffled vector int shuffled BST
    BinarySearchTree<int> shuffleBST;
    for(int i = 0; i < shuffleForBST.size(); i ++){
        shuffleBST.add(shuffleForBST[i]);
    }

    //Searching through shuffled BST and writing to file
    intBSTDepthFile << "Start of Shuffled BST:\n";
    for(int i = 1; i <= 100; i++){
        depth = 0;
        shuffleBST.find(i, depth);
        intBSTDepthFile << depth;
        intBSTDepthFile << "\n";
    }

    //Closing intBST file
    intBSTDepthFile.close();

    //BST of Movie objects
    BinarySearchTree<Movie> movieBST;
    for(int i = 0; i < movie.size(); i++){
        movieBST.add(movie[i]);
    }
    cout << movieBST.isEmpty() << endl;

    //Creating file to read movie BST into
    ofstream movieBSTDepthFile;
    movieBSTDepthFile.open("movieBSTDepthFile.txt");

    //Searching through movie BST and writing to file
    movieBSTDepthFile << "Start of movie BST:\n";
    for(int i = 0; i <= movie.size(); i++){
        depth = 0;
        movieBST.find(movie[i], depth);
        movieBSTDepthFile << depth;
        movieBSTDepthFile << "\n";
    }

    //Closing movie BST file
    movieBSTDepthFile.close();

    //Ordered AVL tree of integers
    AVLTree<int> orderedAVL;
    for(int i = 1; i <= 100; i++){
        orderedAVL.add(i);
    }

    //Creating file to read AVL into
    ofstream intAVLDepthFile;
    intAVLDepthFile.open("intAVLDepthFile.txt");

    //Searching through ordered AVL
    intAVLDepthFile << "Start of ordered AVL:\n";
    for(int i = 1; i <= 100; i++){
        depth = 0;
        intAVLDepthFile << orderedAVL.find(i, depth);
        intAVLDepthFile << depth;
        intAVLDepthFile << "\n";
    }

    //Shuffled vector for the shuffled AVL
    vector<int> shuffleForAVL;
    for(int i = 1; i <= 100; i++){
        shuffleForAVL.push_back(i);
    }
    std::random_shuffle(shuffleForAVL.begin(), shuffleForAVL.end());

    //Inserting shuffled vector int shuffled AVL
    AVLTree<int> shuffleAVL;
    for(int i = 0; i < shuffleForAVL.size(); i ++){
        shuffleAVL.add(shuffleForAVL[i]);
    }

    //Searching through shuffled AVL and writing to file
    intAVLDepthFile << "Start of shuffled AVL:\n";
    for(int i = 1; i <= 100; i++){
        depth = 0;
        shuffleAVL.find(i, depth);
        intAVLDepthFile << depth;
        intAVLDepthFile << "\n";
    }

    //Closing AVL file
    intAVLDepthFile.close();

    //AVL of Movie objects
    AVLTree<Movie> movieAVL;
    for(int i = 0; i < movie.size(); i++){
        movieAVL.add(movie[i]);
    }

    //Creating file to read movie AVL into
    ofstream movieAVLDepthFile;
    movieAVLDepthFile.open("movieAVLDepthFile.txt");
    movieAVLDepthFile << "Start of movie AVL:\n";

    //Searching through movie AVL and writing to file
    for(int i = 0; i <= movie.size(); i++){
        depth = 0;
        movieAVL.find(movie[i], depth);
        movieAVLDepthFile << depth;
        movieAVLDepthFile << "\n";
    }

    //Closing movie AVL file
    movieAVLDepthFile.close();

    //Ordered Splay tree of integers
    SplayTree<int> orderedSplay;
    for(int i = 1; i <= 100; i++){
        orderedSplay.add(i);
    }

    //Creating file to read Splay into
    ofstream intSplayDepthFile;
    intSplayDepthFile.open("intSplayDepthFile.txt");

    //Searching through ordered Splay
    intSplayDepthFile << "Start of ordered Splay:\n";
    for(int i = 1; i <= 100; i++){
        depth = 0;
        orderedSplay.find(i, depth);
        intSplayDepthFile << depth;
        intSplayDepthFile << "\n";
    }

    //Shuffled vector for the shuffled Splay
    vector<int> shuffleForSplay;
    for(int i = 1; i <= 100; i++){
        shuffleForSplay.push_back(i);
    }
    std::random_shuffle(shuffleForSplay.begin(), shuffleForSplay.end());

    //Inserting shuffled vector int shuffled Splay
    SplayTree<int> shuffleSplay;
    for(int i = 0; i < shuffleForSplay.size(); i ++){
        shuffleSplay.add(shuffleForSplay[i]);
    }

    //Searching through shuffled Splay and writing to file
    intSplayDepthFile << "Start of shuffled Splay:\n";
    for(int i = 1; i <= 100; i++){
        depth = 0;
        shuffleSplay.find(i, depth);
        intSplayDepthFile << depth;
        intSplayDepthFile << "\n";
    }

    //Closing Splay file
    intSplayDepthFile.close();

    //Splay of Movie objects
    SplayTree<Movie> movieSplay;
    for(int i = 0; i < movie.size(); i++){
        movieSplay.add(movie[i]);
    }

    //Creating file to read movie Splay into
    ofstream movieSplayDepthFile;
    movieSplayDepthFile.open("movieSplayDepthFile.txt");

    //Searching through movie Splay and writing to file
    movieSplayDepthFile << "Start of ordered Splay search:\n";
    for(int i = 0; i <= movie.size(); i++){
        depth = 0;
        movieSplay.find(movie[i], depth);
        movieSplayDepthFile << depth;
        movieSplayDepthFile << "\n";
    }

    //Creating randomized vector of the size of the movie vector to get random indexes to search by
    vector<int> splayIndex;
    for(int i = 0; i < movie.size(); i ++){
        splayIndex.push_back(i);
    }
    std::random_shuffle(splayIndex.begin(), splayIndex.end());

    //Creating secondary Splay of trees
    SplayTree<Movie> movieSplay2;
    for(int i = 0; i < movie.size(); i++){
        movieSplay2.add(movie[i]);
    }

    //Randomly searching through secondary movie Splay tree with a nested for loop
    for(int i = 0; i < 5; i++){
        movieSplayDepthFile << "Start of shuffled Splay search:\n";
        for(int k = 0; k <= movie.size(); k++){
            depth = 0;
            movieSplay2.find(movie[splayIndex[k]], depth);
            movieSplayDepthFile << depth;
            movieSplayDepthFile << "\n";
        }
    }

    //Closing movie Splay file
    movieSplayDepthFile.close();

    return 0;
}