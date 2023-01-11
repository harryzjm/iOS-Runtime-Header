//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface _WBSFaviconRecord : NSObject
{
    _Bool _isPrivate;
    NSURL *_pageURL;
    NSURL *_originalPageURL;
    NSURL *_iconURL;
    NSData *_iconData;
    struct CGSize _size;
}

+ (id)new;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) NSURL *originalPageURL; // @synthesize originalPageURL=_originalPageURL;
@property(readonly, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
- (void).cxx_destruct;
- (id)initWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 iconData:(id)arg4 size:(struct CGSize)arg5 isPrivate:(_Bool)arg6;
- (id)init;

@end
