//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface _WKLinkIconParameters : NSObject
{
    struct RetainPtr<NSURL> _url;
    long long _iconType;
    struct RetainPtr<NSString> _mimeType;
    struct RetainPtr<NSNumber> _size;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long iconType;
@property(readonly, copy, nonatomic) NSNumber *size;
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(readonly, copy, nonatomic) NSURL *url;
- (id)_initWithLinkIcon:(const struct LinkIcon *)arg1;

@end

