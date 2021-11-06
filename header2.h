std::ostream& operator<<(std::ostream& output, Overload& obj)
{
    output << obj.getField();
    return output;
}

std::istream& operator>>(std::istream& input, Overload& obj)
{
    input >> obj.field;
    return input;
}

void operator*=(Overload& X, Overload Y)
{
    X.field *= Y.field;
}

Overload operator+(Overload obj, int x)
{
    return Overload{obj.getField() + x};
}

Overload Overload::operator=(Overload obj)
    {
        field = obj.field;
        return *this;
    }

Overload Overload::operator+(Overload obj)
    {
        field = field + obj.getField();
        return *this;
    }