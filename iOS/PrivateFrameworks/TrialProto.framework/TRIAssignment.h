//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TRICoreMLAssignmentLanguage, TRINSExpressionAssignmentLanguage, TRIPlanOutAssignmentLanguage, TRIUIAssignmentLanguage;

@interface TRIAssignment
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TRICoreMLAssignmentLanguage *coremlLanguage; // @dynamic coremlLanguage;
@property(readonly, nonatomic) int languageOneOfCase; // @dynamic languageOneOfCase;
@property(retain, nonatomic) TRINSExpressionAssignmentLanguage *nsexpressionLanguage; // @dynamic nsexpressionLanguage;
@property(retain, nonatomic) TRIPlanOutAssignmentLanguage *planoutLanguage; // @dynamic planoutLanguage;
@property(retain, nonatomic) TRIUIAssignmentLanguage *uiLanguage; // @dynamic uiLanguage;

@end
