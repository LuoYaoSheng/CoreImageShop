//
//  SCMainWindowController.h
//  CoreImageShop
//
//  Created by Simon CORSIN on 16/05/14.
//
//

#import <Cocoa/Cocoa.h>
#import "SCMediaDisplayerView.h"
#import <SCRecorderMac/SCRecorderMac.h>

@interface SCMainWindowController : NSWindowController<NSTableViewDelegate, NSTableViewDataSource, NSWindowDelegate, SCFilterDelegate>

@property (weak) IBOutlet NSTableView *filtersTableView;
@property (weak) IBOutlet SCMediaDisplayerView *mediaDisplayerView;

@property (readonly, nonatomic) NSArray *filters;
@property (strong, nonatomic) NSURL *fileUrl;
@property (readonly, nonatomic) NSData *documentData;
@property (strong, nonatomic) SCFilterGroup *filterGroup;
@property (weak) IBOutlet NSTableView *availableFiltersTableView;

- (void)addFilter:(SCFilter *)filter;
- (void)removeFilter:(SCFilter *)filter;
- (void)updateTitle;

- (void)applyDocument:(NSData *)data;

- (IBAction)deleteActivated:(NSButton *)sender;

@end
