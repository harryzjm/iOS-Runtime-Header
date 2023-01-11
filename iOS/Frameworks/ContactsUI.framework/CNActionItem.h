//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNActionViewTemplateImage;

@interface CNActionItem : NSObject
{
    _Bool _disabled;
    NSString *_type;
    NSString *_title;
    id <CNActionViewTemplateImage> _templateImage;
}

+ (id)actionItemWithTemplateImage:(id)arg1 type:(id)arg2;
+ (id)actionItemWithImage:(id)arg1 type:(id)arg2;
@property(readonly, nonatomic) id <CNActionViewTemplateImage> templateImage; // @synthesize templateImage=_templateImage;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTemplateImage:(id)arg1 type:(id)arg2;

@end

