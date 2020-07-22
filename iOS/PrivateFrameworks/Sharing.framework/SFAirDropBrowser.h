//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol SFAirDropBrowserDelegate;

@interface SFAirDropBrowser : NSObject
{
    struct __SFBrowser *_browser;
    NSMutableDictionary *_nodes;
    NSString *_sessionID;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
}

@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
