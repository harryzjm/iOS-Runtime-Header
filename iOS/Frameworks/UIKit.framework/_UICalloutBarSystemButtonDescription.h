//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UICalloutBarSystemButtonDescription : NSObject
{
    NSString *m_title;
    UIImage *m_image;
    SEL m_action;
    int m_type;
    CDUnknownBlockType m_configurationBlock;
}

+ (id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
+ (id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=m_configurationBlock;
@property(readonly, nonatomic) SEL action; // @synthesize action=m_action;
- (void).cxx_destruct;
- (id)materializeButtonInView:(id)arg1;
- (id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4;

@end

