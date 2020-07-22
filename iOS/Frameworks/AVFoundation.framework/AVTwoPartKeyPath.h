//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKeyPath-Protocol.h>
#import <AVFoundation/NSCopying-Protocol.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying>
{
    NSString *_topLevelKey;
    NSString *_secondLevelKey;
}

@property(readonly, nonatomic) NSString *secondLevelPropertyKey; // @synthesize secondLevelPropertyKey=_secondLevelKey;
@property(readonly, nonatomic) NSString *topLevelPropertyKey; // @synthesize topLevelPropertyKey=_topLevelKey;
@property(readonly, nonatomic) NSString *keyPathString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

