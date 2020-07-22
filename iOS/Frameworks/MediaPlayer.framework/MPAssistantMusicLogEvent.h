//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPAssistantLogEvent-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent>
{
    unsigned int _sessionID;
    NSString *_siriSessionIdentifier;
}

@property(copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *eventPayload;
@property(readonly, nonatomic) long long eventCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

