//
//  ViewController.h
//  RoboMeBasicSample
//
//  Copyright (c) 2013 WowWee Group Limited. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>
#import <RoboMe/RoboMe.h>
#import <AddressBook/AddressBook.h>
#import <EventKit/EventKit.h>
#import <SpeechKit/SpeechKit.h>

#import <AudioToolbox/AudioToolbox.h>
#import "AVFoundation/AVAudioPlayer.h"
#import "AppDelegate.h"

@interface ViewController : UIViewController <RoboMeDelegate,SpeechKitDelegate, SKRecognizerDelegate,AVAudioPlayerDelegate>
@property (strong, nonatomic) IBOutlet UILabel *cityNameLabel;

@property (strong, nonatomic) IBOutlet UITextView *outputTextView;
@property (strong, nonatomic) SKRecognizer* voiceSearch;

@property (strong, nonatomic) IBOutlet UILabel *edgeLabel;
@property (strong, nonatomic) IBOutlet UILabel *chest20cmLabel;
@property (strong, nonatomic) IBOutlet UILabel *chest50cmLabel;
@property (strong, nonatomic) IBOutlet UILabel *cheat100cmLabel;
@property (strong, nonatomic) IBOutlet UITextField *enterCity;
- (IBAction)buttonAddReminder:(id)sender;

@property (strong, nonatomic) IBOutlet UILabel *firstName;
@property (strong, nonatomic) IBOutlet UILabel *phoneNumber;

@property (nonatomic, retain) AVAudioPlayer *player;


@property (nonatomic, strong) EKEventStore *eventStore;
@property BOOL eventStoreAccessGranted;
@property (strong, nonatomic) NSMutableArray *todoItems;

- (IBAction)clickMeButton:(id)sender;

@end
