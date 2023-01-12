//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTextAttachment.h"

@class UISearchToken, _UISearchTokenAttachmentViewProvider;

__attribute__((visibility("hidden")))
@interface _UISearchTokenAttachment : NSTextAttachment
{
    _UISearchTokenAttachmentViewProvider *_viewProvider;
    UISearchToken *_token;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) UISearchToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) _UISearchTokenAttachmentViewProvider *_viewProvider; // @synthesize _viewProvider;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;
- (_Bool)usesTextAttachmentView;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)initWithToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1 ofType:(id)arg2;

@end

