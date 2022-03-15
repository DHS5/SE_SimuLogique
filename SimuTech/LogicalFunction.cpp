class LogicalFunction
{
    public static LogicalFunction InstanceLogicalFunction = this;
    
    /// <summary>
    /// Logical function NOT
    /// </summary>
    /// <param name="e">Entry</param>
    /// <returns>! e (Contrary of the entry)</returns>
    bool NOT(bool e)
    {
        return !e;
    }

    /// <summary>
    /// Logical function AND
    /// </summary>
    /// <param name="e1">Entry 1</param>
    /// <param name="e2">Entry 2</param>
    /// <returns>e1 and e2</returns>
    bool AND(bool e1, bool e2)
    {
        return (e1 && e2);
    }

    /// <summary>
    /// Logical function OR
    /// </summary>
    /// <param name="e1">Entry 1</param>
    /// <param name="e2">Entry 2</param>
    /// <returns>e1 || e2</returns>
    bool OR(bool e1, bool e2)
    {
        return (e1 || e2);
    }

    /// <summary>
    /// Logical function NAND
    /// </summary>
    /// <param name="e1">Entry 1</param>
    /// <param name="e2">Entry 2</param>
    /// <returns>NOT ( AND (e1 , e2) )</returns>
    bool NAND(bool e1, bool e2)
    {
        return !AND(e1, e2);
    }

    bool NOR(bool e1, bool e2)
    {
        return !OR(e1, e2);
    }

    bool XNOR(bool e1, bool e2)
    {
        return ((e1 && e2) || (!e1 && !e2));
    }

    bool XOR(bool e1, bool e2)
    {
        return !XNOR(e1, e2);
    }
};