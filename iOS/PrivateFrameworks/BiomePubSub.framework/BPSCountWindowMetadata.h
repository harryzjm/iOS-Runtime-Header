//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSWindowMetadata-Protocol.h>

@interface BPSCountWindowMetadata : NSObject <BPSWindowMetadata>
{
    unsigned long long _currentCount;
}

@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
- (id)initWithCurrentCount:(unsigned long long)arg1;
- (id)init;

@end
