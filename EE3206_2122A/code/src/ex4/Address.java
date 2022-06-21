package ex4;

public final class Address {

    private String street;
    private String city;
    private String state;
    private String zip;

    /** Create an address with street, city, state, and zip */
    public Address(String street, String city, String state, String zip) {
        this.street = street;
        this.city = city;
        this.state = state;
        this.zip = zip;
    }

    /** Return street */
    public String getStreet() {
        return street;
    }

    /** Return city */
    public String getCity() {
        return city;
    }

    /** Return state */
    public String getState() {
        return state;
    }

    /** Return zip */
    public String getZip() {
        return zip;
    }

    /** Get full address */
    public String getFullAddress() {
        return street + '\n' + city + ", " + state + ' ' + zip + '\n';
    }
}
