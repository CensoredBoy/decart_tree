#ifndef DTREE_H
#define DTREE_H

#include "node.hpp"
#include <vector>

/**
 * @brief Класс DTree представляет собой бинарное дерево поиска.
 * Каждый узел дерева содержит целочисленное значение, и дерево построено таким образом,
 * что для каждого узла все значения в левом поддереве меньше, чем значение узла,
 * а все значения в правом поддереве больше.
 */
class DTree
{
    Node* root; /**< Указатель на корневой узел дерева. */

public:
    /**
     * @brief Конструктор для создания объекта класса DTree.
     * @param x Значение корневого узла.
     */
    DTree(int x) noexcept;

    /**
     * @brief Конструктор по умолчанию для создания пустого дерева.
     */
    DTree() noexcept;

    /**
     * @brief Конструктор копирования.
     * @param other Дерево, которое необходимо скопировать.
     */
    DTree(DTree &other) noexcept;

    /**
     * @brief Конструктор перемещения.
     * @param other Дерево, которое необходимо переместить.
     */
    DTree(DTree &&other) noexcept;

    /**
     * @brief Деструктор, освобождает выделенную память.
     */
    ~DTree();

    /**
     * @brief Вставка нового значения в дерево.
     * @param x Значение, которое необходимо вставить.
     */
    void insert(int x);

    /**
     * @brief Удаление значения из дерева.
     * @param x Значение, которое необходимо удалить.
     */
    void remove(int x);

    /**
     * @brief Поиск значения в дереве.
     * @param x Значение, которое необходимо найти.
     * @return true, если значение найдено; false в противном случае.
     */
    bool find(int x);

    /**
     * @brief Получение указателя на корневой узел дерева.
     * @return Указатель на корневой узел.
     */
    Node* get_root() { return root; }

    /**
     * @brief Получение вектора значений в порядке обхода дерева.
     * @return Вектор значений.
     */
    std::vector<int> get_vector();

    // Операторы присваивания запрещены
    DTree& operator=(const DTree&) = delete;
    DTree& operator+=(const DTree&) = delete;
    DTree& operator-=(const DTree&) = delete;
    DTree& operator*=(const DTree&) = delete;
    DTree& operator/=(const DTree&) = delete;
};

#endif