//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UICommandDiffv1 : NSObject <NSCopying>
{
    NSOrderedSet *_changes;
}

+ (_Bool)supportsSecureCoding;
+ (id)diffWithChanges:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOrderedSet *changes; // @synthesize changes=_changes;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChanges:(id)arg1;

@end

