//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <GameKitServices/NSCoding-Protocol.h>

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding>
{
    unsigned int type;
    unsigned int band;
    NSData *data;
}

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)data;
- (unsigned int)band;
- (unsigned int)type;
- (id)init;

@end
