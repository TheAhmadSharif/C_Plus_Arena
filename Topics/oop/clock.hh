class Clock {
  public:
    Clock(int hour, int minute);
    void tick_tock();
    int fetch_hour() const;
    int fetch_minutes() const;
    void print() const;

  private:
    // Minutes since the previous midnight
    int minutes_since_midnight__;
};