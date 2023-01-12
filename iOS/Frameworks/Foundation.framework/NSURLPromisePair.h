//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSURLPromisePair : NSObject
{
    NSURL *_logicalURL;
    NSURL *_physicalURL;
}

+ (id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2;
+ (id)pairWithURL:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly) NSURL *physicalURL; // @synthesize physicalURL=_physicalURL;
@property(readonly) NSURL *logicalURL; // @synthesize logicalURL=_logicalURL;
@property(readonly, copy) NSURL *URL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

