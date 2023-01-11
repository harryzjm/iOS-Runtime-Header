//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCArticleDownloadServiceType-Protocol.h>

@protocol FCContentContext, FCFlintHelper;

@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType>
{
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(readonly, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (id)downloadArticleWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchCachedArticleWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2;
- (id)init;

@end
