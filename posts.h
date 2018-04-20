#ifndef POSTS_H
#define POSTS_H
#include "comments.h"
class Post
{
public:
   QString owner;
   QString postBody;
   std::vector<Comment> postComments;
};


#endif // POSTS_H
