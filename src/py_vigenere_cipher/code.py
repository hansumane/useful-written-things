#!/usr/bin/python3


from vigenere_cipher import encrypt, decrypt


if __name__ == '__main__':

    with open('input.txt', 'r') as f:
        file = f.read().split('\n')
        alphabet, text, key, case = file[0], file[1], file[2], file[3].lower()
        if case == 'encrypt':
            print(encrypt(alphabet, text, key))
        elif case == 'decrypt':
            print(decrypt(alphabet, text, key))
        else:
            print('Wrong encrypt/decrypt argument!')
