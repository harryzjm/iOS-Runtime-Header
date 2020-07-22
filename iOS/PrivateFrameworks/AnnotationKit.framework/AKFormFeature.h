//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSCopying-Protocol.h>

@class AKPageController;

@interface AKFormFeature : NSObject <NSCopying>
{
    AKPageController *_page;
    struct CGRect _rect;
}

+ (id)featureWithRect:(struct CGRect)arg1 onPage:(id)arg2;
@property(nonatomic) __weak AKPageController *page; // @synthesize page=_page;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2;

@end

