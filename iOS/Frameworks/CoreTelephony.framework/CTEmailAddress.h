//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject
{
    NSString *_address;
}

+ (id)emailAddress:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;
- (id)encodedString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(id)arg1;

@end

