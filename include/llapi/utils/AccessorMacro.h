#pragma once

#define LL_RO_MEMBER(type, name, getter)                                                                               \
private:                                                                                                               \
    type name;                                                                                                         \
                                                                                                                       \
public:                                                                                                                \
    LIAPI type getter() const;

#define LL_RW_MEMBER(type, name, getter, setter)                                                                       \
    LL_RO_MEMBER(type, name, getter)                                                                                   \
    LIAPI void setter(type _val);

#define LL_GETTER_IMPL(clazz, type, name, getter)                                                                   \
    type clazz::getter() const {                                                                                       \
        return name;                                                                                                   \
    }

#define LL_SETTER_IMPL(clazz, type, name, setter)                                                           \
    void clazz::setter(type _val) {                                                                                    \
        this->name = _val;                                                                                             \
    }
