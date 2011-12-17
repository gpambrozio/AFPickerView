## Description

Custom UIPickerView controller reconstruction allows you to customize the graphics 
(background, shadow, selector) just replace those files with your own:

 * pickerBackground.png
 * pickerGlass.png
 * pickerShadows.png

![](http://fr.k-r-w.ru/extern/afpickerview_screenshot.png)	
	
## Usage

1. Create AFPickerView instance and customize it

```objective-c
pickerView = [[AFPickerView alloc] initWithFrame:CGRectMake(30.0, 250.0, 126.0, 197.0)];
pickerView.rowFont = [UIFont boldSystemFontOfSize:19.0];
pickerView.rowIndent = 10.0;
```

2. Set dataSource, delegate and call <code>- (void)reloadData</code>

```objective-c
pickerView.dataSource = self;
pickerView.delegate = self;
[pickerView reloadData];
```
3. Implement AFPickerViewDataSource and AFPickerViewDelegate

See demo in box