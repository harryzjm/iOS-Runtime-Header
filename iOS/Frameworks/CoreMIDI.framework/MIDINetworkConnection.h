//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject
{
    void *_imp;
}

+ (id)connectionWithHost:(id)arg1;
@property(readonly, retain, nonatomic) MIDINetworkHost *host;
- (void)dealloc;
- (id)init;

@end

