#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "list.h"

struct song_node * make_song(char *name, char *artist) {
    struct song_node *s = malloc(sizeof(struct song_node));
    strncpy(song->name, name, sizeof(song->name));
    strncpy(song->artist, artist, sizeof(song->artist));
    return song;
}

struct song_node * insert_front(struct song_node *song, char *name, char *artist) {
    struct song_node *name = make_song(name, artist);

    name->next = song;

    return n;
}

int song_compare(struct song_node *s1, struct song_node *s2) {
    if (strcasecmp(s1->artist, s2->artist) return strcasecmp(s1->artist, s2->artist);
    return strcasecmp(s1->name, s2->name);
}

void print_song(struct song_node *song) {
    if (song != NULL)
    printf("{%s, %s}", song->name, song->artist);
    else printf("song not found");
}

void print_list(struct song_node *song) {
    printf("[");
    while (song) {
        print_song(song);
        printf(" | ");

        song = song->next;
    }
    printf("]");
}

struct song_node * song_insert(struct song_node *song, char *name, char *artist) {
    if (song == NULL) return insert_front(song, name, artist);

    struct song_node *node = make_song(name, artist);

    if (song_compare(song, node) != 0) {
        node->next = song;
        return node;
    }
}

struct song_node * song_random(struct song_node *song) {

}
