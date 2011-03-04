//
//  MainController.h
//  fayeMac
//
//  Created by Paul Crawford on 3/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FayeConnector.h"

@interface MainController : NSObject <FayeConnectorDelegate> {
  NSTextView *messagesText;
  NSButton *sendBtn;
  NSTextField *messageField;
  NSTextField *serverField;
  NSTextField *channelField;  
  FayeConnector *faye;
  NSButton *connectBtn;
  NSString *serverURLString;
  NSString *serverChannelString;
  BOOL connected;
  NSImageView *connectIndicator;
}

@property (retain) IBOutlet NSTextView *messagesText;
@property (retain) IBOutlet NSButton *sendBtn;
@property (retain) IBOutlet NSTextField *messageField;
@property (retain) IBOutlet NSTextField *serverField;
@property (retain) IBOutlet NSTextField *channelField;  
@property (retain) FayeConnector *faye;
@property (retain) IBOutlet NSButton *connectBtn;
@property (retain) NSString *serverURLString;
@property (retain) NSString *serverChannelString;
@property (assign) BOOL connected;
@property (retain) IBOutlet NSImageView *connectIndicator;

- (IBAction) connectToServer:(id)sender;
- (IBAction) sendMessage:(id)sender;

@end