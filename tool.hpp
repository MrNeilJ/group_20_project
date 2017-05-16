
#ifndef TOOL_HPP
#define TOOL_HPP

class Tool {
private:
    int strength;
    char type;
    enum ToolType {r, p, s};
public:
    Tool();
    virtual ~Tool();
    virtual void SetStrength(int)=0;
};

#endif /* TOOL_HPP */

