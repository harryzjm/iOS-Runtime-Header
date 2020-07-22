//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IMTunesController : NSObject
{
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableDictionary *_playerInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}

+ (id)sharedTunesController;
@property(nonatomic) NSMutableDictionary *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(readonly, nonatomic) NSString *messageFormat;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_playerChangedNotification:(id)arg1;
- (void)_playerChanged:(id)arg1;
- (void)_updateMessage;
@property(readonly, nonatomic) _Bool isEnabled;
- (void)dealloc;
- (id)init;

@end

