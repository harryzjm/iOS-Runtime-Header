//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@class NSURL;

@interface WKPreviewElementInfo : NSObject <NSCopying>
{
    struct RetainPtr<NSURL> _linkURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *linkURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithLinkURL:(id)arg1;

@end

