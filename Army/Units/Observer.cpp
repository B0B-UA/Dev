#include "Observer.h"

Observer::Observer(){
	this->observables = new std::set<Observable*>();
}

Observer::~Observer() {
	std::set<Observable*>::iterator it = this->observables->begin();

	for (; it != this->observables->end(); it++ ) {
		(*it)->removeObserver(this);
	}
	delete(this->observables);
}

void Observer::addObservable(Observable* observable) {
	this->observables->insert(observable);
	observable->addObserver(this);
}

void Observer::removeObservable(Observable* observable) {
	this->observables->erase(observable);
}
