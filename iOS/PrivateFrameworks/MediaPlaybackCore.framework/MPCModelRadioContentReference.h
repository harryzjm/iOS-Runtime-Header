//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class ICRadioContentReference;

@interface MPCModelRadioContentReference : NSObject <NSCopying>
{
    ICRadioContentReference *_ICRadioContentReference;
}

+ (id)referenceWithMPModelObject:(id)arg1;
@property(readonly, nonatomic) ICRadioContentReference *ICRadioContentReference; // @synthesize ICRadioContentReference=_ICRadioContentReference;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithICRadioContentReference:(id)arg1;

@end
