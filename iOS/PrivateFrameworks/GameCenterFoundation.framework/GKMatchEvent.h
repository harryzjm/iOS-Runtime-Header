//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class GKPlayer, NSData;

@interface GKMatchEvent : NSObject
{
    NSData *_data;
    GKPlayer *_recipientPlayer;
}

@property(retain, nonatomic) GKPlayer *recipientPlayer; // @synthesize recipientPlayer=_recipientPlayer;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;

@end

