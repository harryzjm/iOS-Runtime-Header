//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIWeakReference : NSObject <NSCopying>
{
    id _object;
}

+ (id)weakReferenceWrappingObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end
