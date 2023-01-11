//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, WFDialogButton;

@interface WFChooseFromListDialogRequest <NSSecureCoding>
{
    _Bool _allowsMultipleSelection;
    NSArray *_items;
    NSString *_message;
    WFDialogButton *_doneButton;
    WFDialogButton *_cancelButton;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) WFDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) WFDialogButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *emptyStateMessage;
- (id)initWithItems:(id)arg1 allowsMultipleSelection:(_Bool)arg2 message:(id)arg3 attribution:(id)arg4 prompt:(id)arg5;

@end
