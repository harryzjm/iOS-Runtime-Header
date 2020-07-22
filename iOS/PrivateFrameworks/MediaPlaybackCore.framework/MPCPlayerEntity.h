//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerItemContainer, MPModelPlayEvent, NSDictionary, NSString;

@interface MPCPlayerEntity : NSObject
{
    _Bool _explicit;
    MPCPlayerItemContainer *_container;
    NSString *_title;
    NSDictionary *_userInfo;
    MPModelPlayEvent *_modelPlayEventRepresentation;
}

@property(readonly, nonatomic) MPModelPlayEvent *modelPlayEventRepresentation; // @synthesize modelPlayEventRepresentation=_modelPlayEventRepresentation;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit; // @synthesize explicit=_explicit;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak MPCPlayerItemContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)artworkCatalog;

@end

