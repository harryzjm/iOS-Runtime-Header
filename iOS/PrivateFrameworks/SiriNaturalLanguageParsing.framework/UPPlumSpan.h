//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, USOSerializedGraph;

@interface UPPlumSpan
{
    NSString *_category;
    USOSerializedGraph *_usoSerializedGraph;
    NSString *_originalMention;
    NSNumber *_score;
    struct _NSRange _range;
}

+ (id)generateTypeWithPlumPrefix:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSNumber *score; // @synthesize score=_score;
@property(readonly) NSString *originalMention; // @synthesize originalMention=_originalMention;
@property(retain) USOSerializedGraph *usoSerializedGraph; // @synthesize usoSerializedGraph=_usoSerializedGraph;
- (id)category;
- (struct _NSRange)range;
- (id)getTypeWithtoutPlumPrefix;
- (id)dictionaryRepresentation;
- (id)initWithRange:(struct _NSRange)arg1 originalMention:(id)arg2 category:(id)arg3 score:(id)arg4 usoSerializedGraph:(id)arg5;

@end
