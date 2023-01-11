//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDJournalEntry.h>

@class ACHTemplate;

@interface ACHTemplateJournalEntry : HDJournalEntry
{
    long long _action;
    ACHTemplate *_template;
    long long _provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(nonatomic) long long provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) ACHTemplate *template; // @synthesize template=_template;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplate:(id)arg1 provenance:(long long)arg2 action:(long long)arg3;

@end

