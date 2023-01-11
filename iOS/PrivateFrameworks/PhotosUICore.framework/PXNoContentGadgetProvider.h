//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PXNoContentGadgetProvider
{
    NSArray *_noContentGadgets;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
}

@property(copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSArray *noContentGadgets; // @synthesize noContentGadgets=_noContentGadgets;
- (void).cxx_destruct;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;

@end

