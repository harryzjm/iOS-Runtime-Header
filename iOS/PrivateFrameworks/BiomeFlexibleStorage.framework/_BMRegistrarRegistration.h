//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface _BMRegistrarRegistration : NSObject
{
    NSString *_bundleID;
    NSURL *_databaseURL;
    NSString *_sourceStreamID;
    NSDate *_registrationDate;
    NSDate *_lastCommunicationDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastCommunicationDate; // @synthesize lastCommunicationDate=_lastCommunicationDate;
@property(retain, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(retain, nonatomic) NSString *sourceStreamID; // @synthesize sourceStreamID=_sourceStreamID;
@property(retain, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;

@end
