# -*- coding:utf-8 -*-
from domain.entities.Cliente import Cliente
from domain.repository.ClienteRepository import *

class ClienteService:
    def __init__(self):
        Repositorio.registrar('Cliente', ClienteRepositorio(validador=ClienteValidador()))
        self.clienteRepositorio = Repositorio.obter('Cliente')
        
    def registrarClientecom(self, cpf, nome):
        cliente = Cliente(cpf, nome)
        self.clienteRepositorio.salvar(cliente)
        
    def obterListaClientes(self):
        return self.clienteRepositorio.todos()