//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class SUUIShareTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SUUIShareTemplateURLItemProvider : UIActivityItemProvider
{
    SUUIShareTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (id)item;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)initWithTemplateElement:(id)arg1;

@end

