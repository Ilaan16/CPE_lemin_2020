/*
** EPITECH PROJECT, 2020
** CPE_lemin_2020
** File description:
** lemin
*/

#ifndef LEMIN_H_
#define LEMIN_H_

typedef struct {
    const char *name;
    unsigned int current_ants_count;
    lm_room_t **connected_rooms;
} lm_room_t;

typedef struct {
    lm_room_t *start_room;
    lm_room_t *ending_room;
} lm_anthill_t;

#endif /* !LEMIN_H_ */
