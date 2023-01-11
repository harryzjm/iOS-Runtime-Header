//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject
{
    NSString *_subcommandName;
    NSMutableArray *__optionMutableArray;
}

+ (id)subcommandWithName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *_optionMutableArray; // @synthesize _optionMutableArray=__optionMutableArray;
@property(copy, nonatomic) NSString *subcommandName; // @synthesize subcommandName=_subcommandName;
- (id)description;
- (void)showHelp;
- (void)stopDueToSigTerm;
- (void)stop;
- (int)run;
- (void)addOption:(BOOL)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(_Bool)arg6;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *optionArray;
- (id)init;
- (id)initWithName:(id)arg1;

@end
