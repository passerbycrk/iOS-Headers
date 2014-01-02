/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPAVController, MPRadioAVItem, NSString, RadioStation, UIButton, UIImage, UILabel, UITableView;

@interface MSRadioNowPlayingOptionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_headerText;
    UILabel *_titleLabel;
    UIButton *_backButton;
    MPRadioAVItem *_nowPlayingItem;
    RadioStation *_station;
    MPAVController *_player;
    id <MSCarDisplayServiceProvider> _serviceProvider;
    UIImage *_albumImage;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImage *albumImage; // @synthesize albumImage=_albumImage;
- (void).cxx_destruct;
- (void)knobBackPressed:(id)arg1;
- (void)_backButtonTouchUpInside:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithItem:(id)arg1 headerText:(id)arg2 player:(id)arg3 serviceProvider:(id)arg4;

@end
