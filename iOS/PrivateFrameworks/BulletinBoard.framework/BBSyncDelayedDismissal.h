//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject
{
    BBBulletin *_bulletin;
    unsigned long long _feeds;
}

@property(nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void).cxx_destruct;

@end
