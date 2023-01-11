//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TSKAnnotation;

__attribute__((visibility("hidden")))
@interface TSAAnnotationReference : NSObject
{
    id <TSKAnnotation> _annotation;
    unsigned long long _pageIndex;
}

@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (_Bool)isValidAndInDocument;
- (_Bool)referencesAnnotation:(id)arg1;

@end

