//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL, SSVURLDataConsumer;
@protocol SKUIArtworkRequestDelegate;

@interface SKUIArtworkRequest <NSCopying>
{
    SSVURLDataConsumer *_dataConsumer;
    id <SKUIArtworkRequestDelegate> _delegate;
    NSString *_imageName;
    NSURL *_url;
}

@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) __weak id <SKUIArtworkRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSVURLDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (_Bool)cachesInMemory;
- (id)description;

@end
