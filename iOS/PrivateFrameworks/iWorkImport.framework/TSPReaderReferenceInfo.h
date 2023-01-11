//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPReaderReferenceInfo : NSObject
{
    long long _objectIdentifier;
    long long _componentIdentifier;
}

+ (id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
@property(readonly, nonatomic) long long componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, nonatomic) long long objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
- (id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (id)init;

@end

